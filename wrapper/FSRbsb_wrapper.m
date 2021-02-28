function [Un,BB]=FSRbsb_wrapper(y,X,bsb,   init,intercept,nocheck, bsbsteps,msg)

% Required input arguments
% y: a column vector of doubles of any length
% ARGS{1}{1} = coder.typeof(0,[Inf 1],[1 0]);
assert(isa(y,'double'));
assert(size(y,2) == 1);

% X: an array of doubles of any dimensions
% ARGS{1}{2} = coder.typeof(0,[Inf Inf],[1 1]);
assert(isa(X,'double'));
assert(all(size(X) <= [Inf Inf]));

% bsb: a column vector of doubles of any length
% ARGS{1}{3} = coder.typeof(0,[Inf 1],[1 0]);
assert(isa(bsb,'double'));
assert(size(bsb,2) == 1);

% Optional input arguments (name / pairs)
% init a scalar double
assert(isa(init, 'double'));
assert(isscalar(init));

% intercept
assert(isa(intercept, 'logical'));

% Optional input arguments (name / pairs)
% nocheck is a boolean
assert(isa(nocheck, 'logical'));

% bsbsteps a columns vector of any length
assert(isa(bsbsteps,'double'));
assert(size(bsbsteps,2) == 1);

% msg is a boolean
assert(isa(msg, 'logical'));


[Un,BB] = FSRbsb(y,X,bsb,'init',init,'intercept',intercept,'nocheck',nocheck,'bsbsteps',bsbsteps,'msg',msg);
end