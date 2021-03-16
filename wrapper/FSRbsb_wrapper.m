function [Un,BB]=FSRbsb_wrapper(y,X,bsb,   bsbsteps,init,intercept,msg,nocheck)

% Required input arguments
% y: a column vector of doubles of any length
assert(isa(y,'double'));
assert(size(y,2) == 1);

% X: an array of doubles of any dimensions
assert(isa(X,'double'));
assert(all(size(X) <= [Inf Inf]));

% bsb: a column vector of doubles of any length
assert(isa(bsb,'double'));
assert(size(bsb,2) == 1);

% Optional input arguments (name / pairs)
% bsbsteps a column vector of any length or a missing value
assert(isa(bsbsteps,'double'));
assert(all(size(bsbsteps) <= [Inf 1]));


% init a scalar double
assert(isa(init, 'double'));
assert(isscalar(init));

% intercept
assert(isa(intercept, 'logical'));

% msg is a boolean
assert(isa(msg, 'logical'));

% Optional input arguments (name / pairs)
% nocheck is a boolean
assert(isa(nocheck, 'logical'));

[Un,BB] = FSRbsb(y,X,bsb,'bsbsteps',bsbsteps,'init',init,'intercept',intercept,'msg',msg,'nocheck',nocheck);
end