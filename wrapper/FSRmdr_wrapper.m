function [mdr,Un,BB,Bols,S2]=FSRmdr_wrapper(y,X,bsb,   bsbmfullrank,bsbsteps,constr,init,intercept,internationaltrade,msg,nocheck,threshlevoutX)

% Required input arguments
% y: a column vector of doubles of any length
assert(isa(y,'double'));
assert(size(y,2) == 1);

% X: an array of doubles of any dimension
assert(isa(X,'double'));
assert(all(size(X) <= [Inf Inf]));

% bsb: a column vector of doubles of any length
assert(isa(bsb,'double'));
assert(size(bsb,2) == 1);

% Optional input arguments (name / pairs)
% bsbmfullrank
assert(isa(bsbmfullrank, 'logical'));

% bsbsteps: a missing value, a scalar or a column vector of doubles of any length
assert(isa(bsbsteps,'double'));
assert(all(size(bsbsteps) <=[Inf 1]));


% constr: a missing value, a scalar or a column vector of doubles of any length
assert(isa(constr,'double'));
assert(all(size(constr) <=[Inf 1]));

% init a scalar double
assert(isa(init, 'double'));
assert(isscalar(init));

% intercept a scalar boolean
assert(isa(intercept, 'logical'));

% internationaltrade a scalar boolean
assert(isa(internationaltrade, 'logical'));

% msg is a scalar boolean
assert(isa(msg, 'logical'));

% nocheck is a boolean
assert(isa(nocheck, 'logical'));

% threshlevoutX a scalar double or an empty value
assert(isa(threshlevoutX, 'double'));
assert(all(size(threshlevoutX) <= [1 1]));


[mdr,Un,BB,Bols,S2] = FSRmdr(y,X,bsb,   'bsbmfullrank',bsbmfullrank,'bsbsteps',bsbsteps,...
    'constr',constr,'init',init,'intercept',intercept,...
    'internationaltrade',internationaltrade,'msg',msg,...
    'nocheck',nocheck,'threshlevoutX',threshlevoutX);
end