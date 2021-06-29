% This script copies
% all .c and .h files inside codegen/lib/fsdaC
% and
% all files inside  ../Rpackage/src which start with _
% and
% file PersonalizedFiles/coder_posix_time.c
% into Documents/fsdac/src

OldFolder=pwd;
fsep=filesep;
eval(['cd codegen' fsep 'lib' fsep 'fsdaC'])

if ispc
    system('copy *.c %USERPROFILE%\Documents\fsdac\src')
    system('copy *.h %USERPROFILE%\Documents\fsdac\src')
else
    % mydocpath='~';
    system('cp *.h ~/Documents/fsdac/src')
    system('cp *.c ~/Documents/fsdac/src')
    % myprogpath=  TO ADD
end

cd(OldFolder)
eval(['cd ..' fsep 'R-package' fsep 'src'])
if ispc
    system('copy _*.* %USERPROFILE%\Documents\fsdac\src')
else
    system('cp _*.* ~/Documents/fsdac/src')
end

% All files inside PersonalizedFiles overwrite existing files
% inside Documents\fsdac\src
cd(OldFolder)
if ispc
    status=system('copy PersonalizedFiles\*.* %USERPROFILE%\Documents\fsdac\src');
else
    status=system('cp PersonalizedFiles/*.* ~/Documents/fsdac/src');
end
if status ~= 0
    error('FSDA:copyFilesIntoDocuments:Wrongcpy','Could not copy files inside PersonalizedFiles subfolder.');
end

%% Find the R version in the current computer (we assume Windows system)
if ispc
    myprogpath=fullfile(getenv('ProgramFiles'), 'R');
    pathRexeFiles=findFile(myprogpath,'InclFiles','R.exe','InclDir',{'x64'});
    
    disp('R versions which are installed in your PC')
    disp(pathRexeFiles)
    
    pathRexe=pathRexeFiles{end};
    FindFullStops=regexp(pathRexe,'\.');
    Rversion=pathRexe(FindFullStops(1)-1:FindFullStops(1)+3);
    
    mydocpath = fullfile(getenv('USERPROFILE'), 'Documents');
    cd(mydocpath)
    % system('"c:\Program Files\R\R-4.1.0\bin\x64\R" CMD INSTALL --clean --no-multiarch fsdac')
    system(['"c:\Program Files\R\R-' Rversion '\bin\x64\R" CMD INSTALL --clean --no-multiarch fsdac'])
    
    if a ~= 0
        disp(str)
        error('FSDA:Create_Rpackage_fsdaC:Wrongcmd','System command returned an error, check the syntax above.');
    end
    
    % TODO
    % str=['"C:/rtools40/mingw64/bin/"gcc  -I"c:/PROGRA~1/R/R-41~1.0/include" -DNDEBUG -O2 -Wall  -std=gnu99 -mfpmath=sse -msse2 -mstackrealign  -c LTSts_wrapper.c -o LTSts_wrapper.o
    % cd([mydocpath '\fsdaC\src'])
    %
    % FileName='LTSts';
    % % FileName='LXS';
    % FileName='FSMbsb';
    %
    % str=['"C:/rtools40/mingw64/bin/"gcc  -I "' myprogpath '/R-'  Rversion '/include" -DNDEBUG -O2 -Wall  -std=gnu99 -mfpmath=sse -msse2 -mstackrealign  -c ' FileName '_wrapper.c -o ' FileName '_wrapper.o'];
    % a=system(str);
    %
    % if a ~= 0
    %     disp(str)
    %     error('FSDA:Create_Rpackage_fsdaC:Wrongcmd','System command returned an error, check the syntax above.');
    % end
    
end