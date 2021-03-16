function [Un,BB]=FSMbsb_wrapper(Y,bsb,   bsbsteps,init,msg,nocheck)

% Required input arguments
% Y: an array of doubles of any dimensions
assert(isa(Y,'double'));
assert(all(size(Y) <= [Inf Inf]));

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

% msg is a boolean
assert(isa(msg, 'logical'));

% nocheck is a boolean
assert(isa(nocheck, 'logical'));

[Un,BB] = FSMbsb(Y,bsb,'bsbsteps',bsbsteps,'init',init,'msg',msg,'nocheck',nocheck);
end