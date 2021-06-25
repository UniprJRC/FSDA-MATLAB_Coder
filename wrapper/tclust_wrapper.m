function [out,C]=tclust_wrapper(Y,k,alpha,restrfactor,  equalweights,...
    mixt,msg,nocheck,nsamp,RandNumbForNini,refsteps,reftol,startv1,Ysave)
% Wrapper function for tclust (when restrfactor is a scalar or vector). 
% NV pair names are not taken as inputs. Instead, just the values are taken
% as inputs.

% Y: an array of doubles of any dimensions
assert(isa(Y,'double'));
assert(all(size(Y) <= [Inf Inf]));

% k: a scalar of type double
assert(isa(k,'double'));
assert(isscalar(k));

% alpha: a scalar of type double
assert(isa(alpha,'double'));
assert(isscalar(alpha));

% restrfactor: a scalar of type double (when it is is struct it is dealt by
% wrapper1)
assert(isa(restrfactor,'double'));
assert(isscalar(restrfactor));

% Optional input arguments (name / pairs) in (case insensitive)
% alphabetical order

% equalweights is a boolean
assert(isa(equalweights, 'logical'));

% mixt: a scalar of type double
assert(isa(mixt,'double'));
assert(isscalar(mixt));

% msg: a scalar of type double
assert(isa(msg,'double'));
assert(isscalar(msg));

% nocheck is a boolean
assert(isa(nocheck, 'logical'));

% nsamp: an array of doubles of any dimensions
assert(isa(nsamp,'double'));
assert(all(size(nsamp) <= [Inf Inf]));

% RandNumbForNini: an array of doubles of any dimensions
assert(isa(RandNumbForNini,'double'));
assert(all(size(RandNumbForNini) <= [Inf Inf]));

% refsteps: a scalar of type double
assert(isa(refsteps,'double'));
assert(isscalar(refsteps));

% reftol: a scalar of type double
assert(isa(reftol,'double'));
assert(isscalar(reftol));

% startv1 is a boolean
assert(isa(startv1, 'logical'));

% Ysave is a boolean
assert(isa(Ysave, 'logical'));

[out,C] = tclust(Y,k,alpha,restrfactor, ...
    'equalweights',equalweights,'mixt',mixt,'msg',msg,...
    'nocheck',nocheck,'nsamp',nsamp,'RandNumbForNini',RandNumbForNini,...
    'refsteps',refsteps,'reftol',reftol,'startv1',startv1,'Ysave',Ysave,...+
    'cshape',1e10,'restrtype','eigen');

coder.cstructname(out,'struct_tclust_T');

end