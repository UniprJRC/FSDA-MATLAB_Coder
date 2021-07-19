function [MDRenv]=FSRenvmdr_wrapper(n,p,   init,prob)

% Required input arguments
% n a scalar double
assert(isa(n, 'double'));
assert(isscalar(n));

% p a scalar double
assert(isa(p, 'double'));
assert(isscalar(p));

% Optional input arguments (name / pairs)

% init a scalar double
assert(isa(init, 'double'));
assert(isscalar(init));

%prob: a row vector of doubles of any length
assert(isa(prob,'double'));
assert(size(prob,1) == 1);
assert(size(prob,2) <= Inf);

[MDRenv] = FSRenvmdr(n,p,'init',init,'prob',prob);
end