function [out,C]=tclust_wrapper1(Y,k,alpha,restrfactor,  cshape,equalweights,...
    mixt,msg,nocheck,nsamp,RandNumbForNini,refsteps,reftol,restrtype,startv1,Ysave)
% Wrapper1 function for tclust (when restrfactor is a struct). 
% NV pair names are not taken as
% inputs. Instead, just the values are taken as inputs.

% Y: an array of doubles of any dimensions
assert(isa(Y,'double'));
assert(all(size(Y) <= [Inf Inf]));

% k: a scalar of type double
assert(isa(k,'double'));
assert(isscalar(k));

% alpha: a scalar of type double
assert(isa(alpha,'double'));
assert(isscalar(alpha));

% restrfactor: a struct
assert(isa(restrfactor,'struct'));
% field par a 3 letters character
assert(isfield(restrfactor,'pars'));
assert(isa(restrfactor.pars,'char'));
assert(all(size(restrfactor.pars) == [1 3]));
% field cdet a scalar of type double
assert(isfield(restrfactor,'cdet'));
assert(isa(restrfactor.cdet,'double'));
assert(isscalar(restrfactor.cdet));
% field shw a scalar of type double
assert(isfield(restrfactor,'shw'));
assert(isa(restrfactor.shw,'double'));
assert(isscalar(restrfactor.shw));
% field shb a scalar of type double
assert(isfield(restrfactor,'shb'));
assert(isa(restrfactor.shb,'double'));
assert(isscalar(restrfactor.shb));
% field k a scalar of type double
assert(isfield(restrfactor,'k'));
assert(isa(restrfactor.k,'double'));
assert(isscalar(restrfactor.k));
% field maxiterDSR a scalar of type double
assert(isfield(restrfactor,'maxiterDSR'));
assert(isa(restrfactor.maxiterDSR,'double'));
assert(isscalar(restrfactor.maxiterDSR));
% field maxiterR a scalar of type double
assert(isfield(restrfactor,'maxiterR'));
assert(isa(restrfactor.maxiterR,'double'));
assert(isscalar(restrfactor.maxiterR));
% field maxiterS a scalar of type double
assert(isfield(restrfactor,'maxiterS'));
assert(isa(restrfactor.maxiterS,'double'));
assert(isscalar(restrfactor.maxiterS));
% field msg a boolean
assert(isfield(restrfactor,'msg'));
assert(isa(restrfactor.msg, 'logical'));
% field tolR a scalar of type double
assert(isfield(restrfactor,'tolR'));
assert(isa(restrfactor.tolR,'double'));
assert(isscalar(restrfactor.tolR));
% field tolS a scalar of type double
assert(isfield(restrfactor,'tolS'));
assert(isa(restrfactor.tolS,'double'));
assert(isscalar(restrfactor.tolS));
% field usepreviousest a boolean
assert(isfield(restrfactor,'usepreviousest'));
assert(isa(restrfactor.usepreviousest, 'logical'));
% field userepmat a scalar of type double
assert(isfield(restrfactor,'userepmat'));
assert(isa(restrfactor.userepmat,'double'));
assert(isscalar(restrfactor.userepmat));
% field sortsh a scalar of type double
assert(isfield(restrfactor,'sortsh'));
assert(isa(restrfactor.sortsh,'double'));
assert(isscalar(restrfactor.sortsh));
% field v a scalar of type double
assert(isfield(restrfactor,'v'));
assert(isa(restrfactor.v,'double'));
assert(isscalar(restrfactor.v));
% field zerotol a scalar of type double
assert(isfield(restrfactor,'zerotol'));
assert(isa(restrfactor.zerotol,'double'));
assert(isscalar(restrfactor.zerotol));

coder.cstructname(restrfactor,'struct_tclustrestrfactor_T');

% Optional input arguments (name / pairs) in (case insensitive)
% alphabetical order

% cshape: a scalar of type double
assert(isa(cshape,'double'));
assert(isscalar(cshape));

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

assert(isa(restrtype, 'char'));
assert(all(size(restrtype) == [1 5]));

% startv1 is a boolean
assert(isa(startv1, 'logical'));

% Ysave is a boolean
assert(isa(Ysave, 'logical'));

[out,C] = tclust(Y,k,alpha,restrfactor, ...
    'cshape',cshape,'equalweights',equalweights,'mixt',mixt,'msg',msg,...
    'nocheck',nocheck,'nsamp',nsamp,'RandNumbForNini',RandNumbForNini,...
    'refsteps',refsteps,'reftol',reftol,'restrtype',restrtype,'startv1',startv1,'Ysave',Ysave);

coder.cstructname(out,'struct_tclust_T');

end