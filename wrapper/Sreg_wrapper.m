function [out,C]=Sreg_wrapper(y,X,  bdp,bestr,conflev,intercept,minsctol,...
    msg,nocheck,nsamp,refsteps,refstepsbestr,reftol,reftolbestr,...
    rhofunc,rhofuncparam,yxsave)
% Wrapper function for LXS (when lms is a scalar). NV pair names are not taken as
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

% bdp a scalar double
assert(isa(bdp, 'double'));
assert(isscalar(bdp));

% bestr a scalar double
assert(isa(bestr, 'double'));
assert(isscalar(bestr));

% conflev a scalar double
assert(isa(conflev, 'double'));
assert(isscalar(conflev));

% intercept
assert(isa(intercept, 'logical'));

% minsctol a scalar double
assert(isa(minsctol, 'double'));
assert(isscalar(minsctol));

% msg is a boolean
assert(isa(msg, 'logical'));

% nocheck is a boolean
assert(isa(nocheck, 'logical'));

% nsamp a scalar double
assert(isa(nsamp, 'double'));
assert(isscalar(nsamp));

% refsteps: a scalar of type double
assert(isa(refsteps,'double'));
assert(isscalar(refsteps));

% refstepsbestr: a scalar of type double
assert(isa(refstepsbestr,'double'));
assert(isscalar(refstepsbestr));

% reftol: a scalar of type double
assert(isa(reftol,'double'));
assert(isscalar(reftol));

% reftolbestr: a scalar of type double
assert(isa(reftolbestr,'double'));
assert(isscalar(reftolbestr));

% rhofunc: a character
assert(isa(rhofunc, 'char'));
assert(all(size(rhofunc) <= [1 Inf]));

% rhofuncparam
assert(isa(rhofuncparam,'double'));
% assert(size(rhofuncparam,2) == 1);
assert(all(size(rhofuncparam) <= [Inf 1]));


% yxsave is a boolean
assert(isa(yxsave, 'logical'));

[out,C] = Sreg(y,X, ...
    'bdp',bdp,'bestr',bestr,'conflev',conflev,'intercept',intercept,...
    'minsctol',minsctol,'msg',msg,'nocheck',nocheck,'nsamp',nsamp',...
    'refsteps',refsteps,'refstepsbestr',refstepsbestr,...
    'reftol',reftol,'reftolbestr',reftolbestr,'rhofunc',rhofunc,...
    'rhofuncparam',rhofuncparam,'yxsave',yxsave);

coder.cstructname(out,'struct_Sreg_T');

end