function [out,C]=MMregeda_wrapper(y,X,  conflev,eff,InitialEst,intercept,...
    nocheck,refsteps,rhofunc,rhofuncparam, Sbdp,Sbestr,Sminsctol,Smsg,Snsamp,Srefsteps,Srefstepsbestr,...
    Sreftol,Sreftolbestr,Srhofunc,Srhofuncparam,tol)
% wrapper function for MMregeda. NV pair names are not taken as
% inputs. Instead, just the values are taken as inputs.

% Required input arguments
% y: a column vector of doubles of any length
% ARGS{1}{1} = coder.typeof(0,[Inf 1],[1 0]);
assert(isa(y,'double'));
assert(size(y,2) == 1);

% X: an array of doubles of any dimensions
% ARGS{1}{2} = coder.typeof(0,[Inf Inf],[1 1]);
assert(isa(X,'double'));
assert(all(size(X) <= [Inf Inf]));

% Optional input arguments (name / pairs) in (case insensitive)
% alphabetical order

% eff a scalar double
assert(isa(conflev, 'double'));
assert(isscalar(conflev));

% eff a column vector of doubles of any length
assert(isa(eff,'double'));
assert(size(eff,2) == 1);


% InitialEst: a struct (with 2 fields)
assert(isa(InitialEst,'struct'));
% assert(length(InitialEst) <=1);

% field beta a column vector of type double
assert(isfield(InitialEst,'beta'));
assert(isa(InitialEst.beta,'double'));
assert(size(InitialEst.beta,1) <= Inf);
assert(size(InitialEst.beta,2) == 1);

% field scale a scalar of type double
assert(isfield(InitialEst,'scale'));
assert(isa(InitialEst.scale,'double'));
assert(isscalar(InitialEst.scale));

% intercept a boolean
assert(isa(intercept, 'logical'));


% nocheck is a boolean
assert(isa(nocheck, 'logical'));

% refsteps: a scalar of type double
assert(isa(refsteps,'double'));
assert(isscalar(refsteps));

% rhofunc: a character
assert(isa(rhofunc, 'char'));
assert(all(size(rhofunc) <= [1 Inf]));

% rhofuncparam
assert(isa(rhofuncparam,'double'));
% assert(size(rhofuncparam,2) == 1);
assert(all(size(rhofuncparam) <= [Inf 1]));


% Sbdp a scalar double
assert(isa(Sbdp, 'double'));
assert(isscalar(Sbdp));

% Sbestr a scalar double
assert(isa(Sbestr, 'double'));
assert(isscalar(Sbestr));

% Sminsctol a scalar double
assert(isa(Sminsctol, 'double'));
assert(isscalar(Sminsctol));

% Smsg is a boolean
assert(isa(Smsg, 'logical'));

% Snsamp a scalar double
assert(isa(Snsamp, 'double'));
assert(isscalar(Snsamp));

% Srefsteps: a scalar of type double
assert(isa(Srefsteps,'double'));
assert(isscalar(Srefsteps));

% Srefstepsbestr: a scalar of type double
assert(isa(Srefstepsbestr,'double'));
assert(isscalar(Srefstepsbestr));

% Sreftol: a scalar of type double
assert(isa(Sreftol,'double'));
assert(isscalar(Sreftol));

% Sreftolbestr: a scalar of type double
assert(isa(Sreftolbestr,'double'));
assert(isscalar(Sreftolbestr));

% Srhofunc: a character
assert(isa(Srhofunc, 'char'));
assert(all(size(Srhofunc) <= [1 Inf]));

% Srhofuncparam
assert(isa(Srhofuncparam,'double'));
% assert(size(rhofuncparam,2) == 1);
assert(all(size(Srhofuncparam) <= [Inf 1]));

% tol: a scalar of type double
assert(isa(tol,'double'));
assert(isscalar(tol));

[out,C] = MMregeda(y,X, ...
    'conflev',conflev,'eff',eff,'effshape',0,'InitialEst',InitialEst,'intercept',intercept,...
    'nocheck',nocheck,'plots',0,'refsteps',refsteps,'rhofunc',rhofunc,...
     'rhofuncparam',rhofuncparam,'Sbdp',Sbdp,...
    'Sbestr',Sbestr,'Sconflev',0.95,'Sminsctol',Sminsctol,'Smsg',Smsg,'Snsamp',Snsamp,...
    'Srefsteps',Srefsteps,'Srefstepsbestr',Srefstepsbestr,...
    'Sreftol',Sreftol,'Sreftolbestr',Sreftolbestr,'Srhofunc',Srhofunc,...
    'Srhofuncparam',Srhofuncparam,'tol',tol);

coder.cstructname(out,'struct_MMregeda_T');

end