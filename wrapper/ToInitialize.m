% This file performs search and replace for all files inside
% codegen/lib/fsdaC
% The indication of the files is in the first column of Excel file named
% ToInitialize.xlsx (a missing entry in the first column means consider all
% files which have .c extension)
% String to search is in the second column of Excel file
% String to replace is in the third column of Excel file
% Remark: this file must be run before copyFilesIntoDocuments.m

OldFolder=pwd;
fsep=filesep;
cd(['codegen' fsep 'lib' fsep 'fsdaC'])
newpwd=pwd;
% Open Excel file
X=readtable([OldFolder fsep 'ToInitialize.xlsx']);
n=size(X,1);
for i=1:n
    issFound=0;
    disp(['Row ' num2str(i)])
    FileName=X{i,1}; % cell format
    FileName=FileName{1,1}; % character format
    
    strTofind=X{i,2}; % cell format
    strTofind=strTofind{1,1}; % character format
    strToReplace=X{i,3}; % cell format
    strToReplace=strToReplace{1,1}; % character format
    
    if isempty(FileName)
        % find and replace in all C files contained in subfolder
        % codegen/lib/fsdaC
        d = dir([newpwd filesep '*.c']);
        
        for ii = 1:length(d)
            FileName=d(ii).name;
            FileWithFullPath=which(FileName);
            [pathstrcf,name,ext]=fileparts(FileWithFullPath);
            fileID = fopen(FileWithFullPath, 'r');
            if fileID==-1
                error('FSDA:ToInitialize:WrongFile',['Could not find file ' '''' FileName ''''])
            end
            
            % Insert the file into fstring
            fstring=fscanf(fileID,'%c');
            fclose(fileID);
            
            % Perform search and replace
            strTofindWithEmptySpace=[' ' strTofind];
            sIndexTofind = regexp(fstring,strTofindWithEmptySpace);
            
            
            if ~isempty(sIndexTofind)
                issFound=issFound+1;
                fstringNEW=strrep(fstring,strTofindWithEmptySpace,[' ' strToReplace]);
                
                if strcmp(strTofind,'printf(')
                    CRLF='\x0A';
                    strToReplace1=['/* Include files */' CRLF  '#include \<R.h\>' CRLF];
                    fstringNEW=regexprep(fstringNEW,'/\* Include files \*/',strToReplace1);
                end
                
                fileID1 = fopen(FileWithFullPath, 'w');
                
                % Write into fileID1
                nb=fprintf(fileID1,'%s',fstringNEW);
                status=fclose(fileID1);
                if status ~=0
                    error('FSDA:ToInitialize:FileNotClosed',['Could not close the connection with file: ' '''' FileName ''''])
                end
            end
        end
        if issFound==0
            error('FSDA:ToInitialize:WrongStrFind',['Could not find string ' '''' strTofind ''' in the .c source files'])
        end
    else
        % find and replace just inside FileName
        FileWithFullPath=which(FileName);
        [pathstrcf,name,ext]=fileparts(FileWithFullPath);
        fileID = fopen(FileWithFullPath, 'r');
        if fileID==-1
            error('FSDA:ToInitialize:WrongFile',['Could not find file ' '''' FileName ''''])
        end
        
        % Insert the file into fstring
        fstring=fscanf(fileID,'%c');
        fclose(fileID);
        
        sIndexTofind = regexp(fstring,strTofind);
        sIndexToreplace = regexp(fstring,strToReplace);
        
        if isempty(sIndexTofind)
            warning('FSDA:ToInitialize:WrongString',['String ' '''' strTofind '''' ' not found in file ' '''' FileName ''''])
        elseif length(sIndexTofind)>1
            warning('FSDA:ToInitialize:WrongString',['String ' '''' strTofind '''' ' found more than once in file ' '''' FileName ''''])
        elseif ~isempty(sIndexToreplace)
            error('FSDA:ToInitialize:WrongString',['String ' '''' strToReplace '''' ' already exists in input file ' '''' FileName ''''])
        else
        end
        % Perform search and replace
        fstring=strrep(fstring,strTofind,strToReplace);
        % Write into fileID
        fileID1 = fopen(FileWithFullPath, 'w');
        if fileID1==-1
            error('FSDA:ToInitialize:WrongFile',['Could not find file ' '''' FileName ''''])
        end
        
        fprintf(fileID1,'%s',fstring);
        status=fclose(fileID1);
        if status ~=0
            error('FSDA:ToInitialize:FileNotClosed',['Could not close the connection with file: ' '''' FileName ''''])
        end
    end
end

cd(OldFolder)