% This file performs search and replace for all files inside
% codegen/lib/fsdaC
% The indication of the files is in the first column of Excel file
% ToInitialize.xlsx (a missing entry in the first column means consider all
% files which have .c extension)
% String to search is in the second column of Excel file
% String to replace is in the third column of Excel file

OldFolder=pwd;
fsep=filesep;
cd(['codegen' fsep 'lib' fsep 'fsdaC'])
newpwd=pwd;
% Open Excel file
X=readtable([OldFolder fsep 'ToInitialize.xlsx']);
n=size(X,1);
for i=2:n
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
            fstringNEW=strrep(fstring,strTofind,strToReplace);
            fileID1 = fopen(FileWithFullPath, 'w');

            % Write into fileID1
            nb=fprintf(fileID1,'%s',fstringNEW);
            status=fclose(fileID1);
            if status ~=0
                error('FSDA:ToInitialize:FileNotClosed',['Could not close the connection with file: ' '''' FileName ''''])
            end
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
            error('FSDA:ToInitialize:WrongString',['String ' '''' strTofind '''' ' not found in file ' '''' FileName ''''])
        elseif length(sIndexTofind)>1
            warning('FSDA:ToInitialize:WrongString',['String ' '''' strTofind '''' ' found more than once in file ' '''' FileName ''''])
        elseif ~isempty(sIndexToreplace)
            error('FSDA:ToInitialize:WrongString',['String ' '''' strToReplace '''' ' already exists in input file ' '''' FileName ''''])
        else
        end
        % Perform search and replace
        fstring=regexprep(fstring,strTofind,strToReplace);
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