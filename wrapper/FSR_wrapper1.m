function [out]=FSR_wrapper1(y,X,   bsbmfullrank,bonflev,h,init,intercept,lms,msg,nocheck,nsamp,threshoutX,weak)

% Required input arguments
% y: a column vector of doubles of any length
assert(isa(y,'double'));
assert(size(y,2) == 1);

% X: an array of doubles of any dimension
assert(isa(X,'double'));
assert(all(size(X) <= [Inf Inf]));

% Optional input arguments (name / pairs)
% bsbmfullrank
assert(isa(bsbmfullrank, 'logical'));

% bonflev a scalar double or an empty value
assert(isa(bonflev, 'double'));
assert(all(size(bonflev) <= [1 1]));

% h a scalar double
assert(isa(h, 'double'));
assert(isscalar(h));

% init a scalar double
assert(isa(init, 'double'));
assert(isscalar(init));

% intercept
assert(isa(intercept, 'logical'));

% lms: a struct (with 1 field bsb)
assert(isa(lms,'struct'));
% field bsb a column vector of type double
assert(isfield(lms,'bsb'));
assert(isa(lms.bsb,'double'));
assert(size(lms.bsb,1) <= Inf);
assert(size(lms.bsb,2) == 1);

% Force name of input structure lms
coder.cstructname(lms,'struct_FSRlms_T');

% msg is a boolean
assert(isa(msg, 'logical'));

% nocheck is a boolean
assert(isa(nocheck, 'logical'));

% nsamp a scalar double
assert(isa(nsamp, 'double'));
assert(isscalar(nsamp));

% threshoutX a scalar double or an empty value
assert(isa(threshoutX, 'double'));
assert(all(size(threshoutX) <= [1 1]));

% weak is a boolean
assert(isa(weak, 'logical'));

[out] = FSR(y,X,   'bsbmfullrank',bsbmfullrank,'bonflev',bonflev,...
    'h',h,'init',init,'intercept',intercept,'lms',lms,'msg',msg,...
    'nocheck',nocheck,'nsamp',nsamp','threshoutX',threshoutX,'weak',weak);


end