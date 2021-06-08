function [out,C]=LTSts_wrapper(y, conflev,dispresults,h,intercept,lshiftlocref,lts,model,msg,nbestindexes,nocheck,nsamp,refstepsALS,reftolALS,SmallSampleCor,yxsave)
% Wrapper function for LTSts. NV pair names are not taken as
% inputs. Instead, just the values are taken as inputs.

% Required input arguments
% y: a column vector of doubles of any length
assert(isa(y,'double'));
assert(size(y,2) == 1);

% Optional input arguments (name / pairs) in (case insensitive)
% alphabetical order

% conflev a scalar double
assert(isa(conflev, 'double'));
assert(isscalar(conflev));

% dispresults a boolean
assert(isa(dispresults, 'logical'));

% h a scalar double
assert(isa(h, 'double'));
assert(isscalar(h));

% intercept
assert(isa(intercept, 'logical'));

% lshiftlocref: a struct (with 3 fields of type scalar double)
assert(isa(lshiftlocref,'struct'));
% field wlength a scalar of type double
assert(isscalar(lshiftlocref.wlength));
assert(isa(lshiftlocref.wlength,'double'));
% field lshiftlocref a scalar of type double
assert(isa(lshiftlocref.typeres,'double'));
assert(isscalar(lshiftlocref.typeres));
% field huberc a scalar of type double
assert(isa(lshiftlocref.huberc,'double'));
assert(isscalar(lshiftlocref.huberc));
coder.cstructname(lshiftlocref,'struct_LTStslshiftlocref_T');

% lts: a struct (with 5 fields of type scalar double)
assert(isa(lts,'struct'));
% field bestr a scalar of type double
assert(isfield(lts,'bestr'));
assert(isa(lts.bestr,'double'));
assert(isscalar(lts.bestr));
% field refsteps a scalar of type double
assert(isfield(lts,'refsteps'));
assert(isa(lts.refsteps,'double'));
assert(isscalar(lts.refsteps));
% field refstepsbestr a scalar of type double
assert(isfield(lts,'refstepsbestr'));
assert(isa(lts.refstepsbestr,'double'));
assert(isscalar(lts.refstepsbestr));
% field reftol a scalar of type double
assert(isfield(lts,'reftol'));
assert(isa(lts.reftol,'double'));
assert(isscalar(lts.reftol));
% field reftolbestr a scalar of type double
assert(isfield(lts,'reftolbestr'));
assert(isa(lts.reftolbestr,'double'));
assert(isscalar(lts.reftolbestr));

% model: a struct (with 6 fields of type scalar double)
assert(isa(model,'struct'));

% field lshift  a column vector of type double
assert(isa(model.lshift,'double'));
% assert(all(size(model.lshift) <= [Inf Inf]));
assert(size(model.lshift,1) == 1);

% field s a scalar of type double
assert(isscalar(model.s));
assert(isa(model.s,'double'));
% field trend a scalar of type double
assert(isa(model.trend,'double'));
assert(isscalar(model.trend));
% field seasonal a scalar of type double
assert(isa(model.seasonal,'double'));
assert(isscalar(model.seasonal));
% field ARp a scalar of type double
assert(isa(model.ARp,'double'));
assert(all(size(model.ARp) <= [1 1]));
% field X a missing value or a matrix of any dimension
assert(isfield(model,'X'));
assert(isa(model.X,'double'));
assert(all(size(model.X) <= [Inf Inf]));
coder.cstructname(model,'struct_LTStsmodel_T');


% msg a boolean
assert(isa(msg, 'logical'));

% nbestindexes a scalar double
assert(isa(nbestindexes, 'double'));
assert(isscalar(nbestindexes));

% nocheck is a boolean
assert(isa(nocheck, 'logical'));

% nsamp: a column vector of maximum length equal to 2
assert(isa(nsamp,'double'));
assert(all(size(nsamp) <= [2 1]));

% refstepsALS a scalar double
assert(isa(refstepsALS,'double'));
assert(isscalar(refstepsALS));

% refstepsALS a scalar double
assert(isa(reftolALS,'double'));
assert(isscalar(reftolALS));

% SmallSampleCor a scalar double
assert(isa(SmallSampleCor,'double'));
assert(isscalar(SmallSampleCor));

% yxsave is a boolean
assert(isa(yxsave, 'logical'));

[out,C] = LTSts(y, ...
    'conflev',conflev,'dispresults',dispresults,'h',h,...
    'intercept',intercept,'lshiftlocref',lshiftlocref,'lts',lts,...
    'model',model,'msg',msg,'nbestindexes',nbestindexes,'nocheck',nocheck,...
    'nsamp',nsamp','refstepsALS',refstepsALS,'reftolALS',reftolALS,...
    'SmallSampleCor',SmallSampleCor,'yxsave',yxsave);

coder.cstructname(out,'struct_LTSts_T');

end