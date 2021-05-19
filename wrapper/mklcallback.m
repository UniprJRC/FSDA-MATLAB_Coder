classdef mklcallback < coder.BLASCallback
    methods (Static)
        % FSDA: is updateBuildInfo necessary for our purposes? or is it just
        % a set of parameters needed for compilation?
        function updateBuildInfo(buildInfo, ~)
            % Specify library path where library files contained in cell named libs
            % belows are located. Note that the path
            libPath = fullfile(pwd,'mkl','WIN','lib','intel64');
            libPriority = '';
            libPreCompiled = true;
            libLinkOnly = true;
            % Libs contains the names of the 3 files which have to be put
            % inside (pwd)/mkl/WIN/lib/intel64.
            % These files must be downloaded from the INTEL web site
            libs = {'mkl_intel_ilp64.lib' 'mkl_intel_thread.lib' 'mkl_core.lib'};
            buildInfo.addLinkObjects(libs, libPath, libPriority, libPreCompiled, ...
                libLinkOnly);
            % libiomp5md.lib is used to generate open multiprocessing parallel
            % code. libiomp5md.lib must be located in (pwd)/bin/win64
            buildInfo.addLinkObjects('libiomp5md.lib',fullfile(matlabroot,'bin', ...
                'win64'), libPriority, libPreCompiled, libLinkOnly);
            buildInfo.addIncludePaths(fullfile(pwd,'mkl','WIN','include'));
            buildInfo.addDefines('-DMKL_ILP64');
        end
        function headerName = getHeaderFilename()
            headerName = 'mkl_cblas.h';
        end
        function intTypeName = getBLASIntTypeName()
            intTypeName = 'MKL_INT';
        end
    end
end