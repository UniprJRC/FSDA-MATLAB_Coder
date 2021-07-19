function [MMDenv]=FSMenvmmd_wrapper(n,v,   init,prob,scaled)

% Required input arguments
% n a scalar double
assert(isa(n, 'double'));
assert(isscalar(n));

% p a scalar double
assert(isa(v, 'double'));
assert(isscalar(v));

% Optional input arguments (name / pairs)

% init a scalar double
assert(isa(init, 'double'));
assert(isscalar(init));

%prob: a row vector of doubles of any length
assert(isa(prob,'double'));
assert(size(prob,1) == 1);
assert(size(prob,2) <= Inf);

% scaled a scalar boolean
assert(isa(scaled, 'logical'));

[MMDenv] = FSMenvmmd(n,v,'init',init,'prob',prob,'scaled',scaled);
end