##  test_fsrbsb

## Call FSRbsb() with all default options.

    ##  %% FSRfan with all default options.
    ##  % Store values of the score test statistic
    ##  % for the five most common values of $\lambda$.
    ##  % Produce also a fan plot and display it on the screen.
    ##  % Common part to all examples: load wool dataset.
    ##  XX=load('wool.txt');
    ##  y=XX(:,end);
    ##  X=XX(:,1:end-1);
    ##  % Function FSRfan stores the score test statistic.
    ##  % In this case we use the five most common values of lambda are considered
    ##  [out]=FSRfan(y,X);
    ##  fanplot(out);
    ##  %The fan plot shows the log transformation is diffused throughout
    ##      the data and does not depend on the presence of particular observations.

    library(fsdac)
    data(wool)
    XX <- wool
    y <- XX[, ncol(XX)]
    X <- XX[, 1:(ncol(XX)-1), drop=FALSE]

    ##  Function FSRfan stores the score test statistic.
    ##  In this case we use the five most common values of lambda are considered
    out <- FSRfan(y, X)

    ##  fanplot(out);
    ##  The fan plot shows the log transformation is diffused throughout
    ##      the data and does not depend on the presence of particular observations.

    ## Without intercept
    out <- FSRfan(y, X, intercept=FALSE)

    ## lms is a matrix, only one value for la
    lms <- matrix(c(1, 6, 16, 24, 15, 16, 20, 21,  9, 15, 17, 26,  7, 10, 15, 17,  6,  7, 12, 15), nrow=4)
    out <- FSRfan(y, X, lms=lms[,1], la=-1)

    ## lms is a matrix, default (5 values) la
    out <- FSRfan(y, X, lms=lms)

## With random data set ==========================================
    library(fsdac)
    n <- 100
    p <- 3
    y <- rnorm(n)
    x <- matrix(rnorm(n*p), nrow=n)
    out <- FSRfan(y, x, family="YJall")

##===============================================================
##
##  The examples from MATLAB

    library(fsdac)


    ##  #1.  FSRfan with all default options.
    ##  Store values of the score test statistic
    ##  for the five most common values of 'lambda'. [Produce also a fan plot and display it on the screen]
    ##  Common part to all examples: load wool dataset.

    data(wool)
    XX <- wool
    y <- XX[, ncol(XX)]
    X <- XX[, 1:(ncol(XX)-1), drop=FALSE]

    ##  Function FSRfan stores the score test statistic.
    ##  In this case we use the five most common values of lambda are considered
    out <- FSRfan(y, X)

    ##  Plot examples:
    ##  fanplot(out);
    ##  The fan plot shows the log transformation is diffused throughout
    ##      the data and does not depend on the presence of particular observations.


    ##  #2.  FSRfan with optional arguments.
    ##  [Produce a personalized fan plot with required font sizes for labels and axes]
    data(wool)
    XX <- wool
    y <- XX[, ncol(XX)]
    X <- XX[, 1:(ncol(XX)-1), drop=FALSE]
    out <- FSRfan(y, X)

    ##  Plot examples:
    ##  [out]=FSRfan(y,X,'plots',1,'FontSize',16,'SizeAxesNum',16);

    ##  #3. Example specifying $\lambda$.
    ##  [Produce a fan plot for each value of 'lambda' inside vector 'la']
    ##  Extract in matrix 'Un' the units which entered the search in each step
    data(wool)
    XX <- wool
    y <- XX[, ncol(XX)]
    X <- XX[, 1:(ncol(XX)-1), drop=FALSE]
    la <- c(-1, -0.5, 0, 0.5)
    out <- FSRfan(y, X, la=la)

    ##  This is reshaping the cell array - I think we do not need to do anything in R
    ##  MATLAB creates a matrix witn n-init rows and length(la) + 1 columns
    ##  [out]=FSRfan(y,X,'la',la,'plots',1);
    ##  Unsel=cell2mat(out.Un);
    ##  lla=length(la);
    ##  nr=size(Unsel,1)/lla;
    ##  Un=[Unsel(1:nr,1) reshape(Unsel(:,2),nr,lla)];


    ##  #4. Example specifying the confidence level and the initial
    ##      starting point for monitoring.
    ##      [Construct fan plot specifying the confidence level and the initial starting point for monitoring]
    data(wool)
    XX <- wool
    y <- XX[, ncol(XX)]
    X <- XX[, 1:(ncol(XX)-1), drop=FALSE]
    out <- FSRfan(y, X, init=ncol(X)+2, nsamp=0)

    ## Plot examples:
    ##  [out]=FSRfan(y,X,'init',size(X,2)+2,'nsamp',0,'conflev',0.95,'plots',1);

%{
    % Example with starting point based on LTS.
    % Extraction of all subsamples, construct
    % fan plot specifying the confidence level and the initial starting
    % point for monitoring based on p+2 observations strong line width for
    % lines associated with the confidence bands.
    XX=load('wool.txt');
    y=XX(:,end);
    X=XX(:,1:end-1);
    [out]=FSRfan(y,X,'init',size(X,2)+2,'nsamp',0,'lms',0,'lwdenv',3,'plots',1);
%}

%{
    %% Fan plot using fidelity cards data.
    % In the example, la is the vector contanining the most common values
    % of the transformation parameter.
    % Store the score test statistics for the specified values of lambda
    % and automatically produce the fan plot
    XX=load('loyalty.txt');
    namey='Sales'
    y=XX(:,end);
    nameX={'Number of visits', 'Age', 'Number of persons in the family'};
    X=XX(:,1:end-1);
    % la = vector contanining the most common values of the transformation
    % parameter
    la=[0 1/3 0.4 0.5];
    % Store the score test statistics for the specified values of lambda
    % and automatically produce the fan plot
    [out]=FSRfan(y,X,'la',la,'init',size(X,2)+2,'plots',1,'lwd',3);
    % The fan plot shows the even if the third root is the best value of the
    % transformation parameter at the end of the search in earlier steps it
    % lies very close to the upper rejection region. The best value of the
    % transformation parameter seems to be the one associated with l=0.4
    % which is always the confidence bands but at the end of search, due to
    % the presence of particular observations it goes below the lower
    % rejection line.
%}

%{
    %% Compare BoxCox with Yeo and Johnson transformation.
    % Store values of the score test statistic
    % for the five most common values of $\lambda$.
    % Produce also a fan plot and display it on the screen.
    % Common part to all examples: load wool dataset.
    XX=load('wool.txt');
    y=XX(:,end);
    X=XX(:,1:end-1);
    % Store the score test statistic using Box Cox transformation.
    [outBC]=FSRfan(y,X,'nsamp',0);
    % Store the score test statistic using Yeo and Johnson transformation.
    [outYJ]=FSRfan(y,X,'family','YJ','nsamp',0);
    fanplot(outBC,'titl','Box Cox');
    fanplot(outYJ,'titl','Yeo and Johnson','tag','YJ');
    disp('Maximum difference in absolute value')
    disp(max(max(abs(outYJ.Score-outBC.Score))))
%}


%{
    %% Example of monitoring of score test for positive and negative obseravations.
    rng('default')
    rng(10)
    close all
    n=200;

    X=randn(n,3);
    beta=[ 1; 1; 1];
    sig=0.5;
    y=X*beta+sig*randn(n,1);

    disp('Fit in the true scale')
    disp('R2 of the model in the true scale')
    if verLessThanFS(8.1)
        out=regstats(y,X,'linear',{'rsquare'});
        disp(out.rsquare)
    else
        outlmori=fitlm(X,y);
        disp(outlmori.Rsquared.Ordinary)
    end
    [~,~,BigAx]=yXplot(y,X,'tag','ori');
    title(BigAx,'Data in the original scale')


    % Find the data to transform
    la=-0.25;
    ytra=normYJ(y,[],la,'inverse',true);
    if any(isnan(ytra))
        disp('response with missing values')
    end

    disp('Fit in the transformed scale')
    disp('R2 of the model in the wrong (inverse) scale')
    if verLessThanFS(8.1)
        out=regstats(ytra,X,'linear',{'rsquare'});
        disp(out.rsquare)
    else
        outlmtra=fitlm(X,ytra);
        disp(outlmtra.Rsquared.Ordinary)
    end
    [~,~,BigAx]=yXplot(ytra,X,'tag','tra','namey','Data to transform (zoom of y [0 500])','ylimy',[0 500]);
    title(BigAx,'Data in the inverse scale')

    la=[ -0.5 -0.25 0];
    out=FSRfan(ytra,X,'la',la,'family','YJpn','plots',1,'init',round(n/2),'msg',0);
    title('Extended fan plot')
%}

%{
    %% Example of monitoring all score tests (also the F test).
    rng('default')
    rng(1000)
    close all
    n=200;

    X=randn(n,3);
    beta=[ 1; 1; 1];
    sig=0.5;
    y=X*beta+sig*randn(n,1);

    % Find the data to transform
    la=0;
    ytra=normYJ(y,[],la,'inverse',true);
    if any(isnan(ytra))
        disp('response with missing values')
    end

    la=[ -0.1 0 0.1];
    % In this case  family is YJall
    out=FSRfan(ytra,X,'la',la,'family','YJall','plots',1,'init',round(n/2),'msg',0);

%}

%{
   %% Comparison of  F test based on constructed variables with F test based on MLE.
    rng('default')
    rng(100)
    close all
    n=200;

    X=randn(n,3);
    beta=[ 1; 1; 1];
    sig=0.5;
    y=X*beta+sig*randn(n,1);

    % Find the data to transform
    la=0;
    ytra=normYJ(y,[],la,'inverse',true);
    if any(isnan(ytra))
        disp('response with missing values')
    end

    la=[ -0.1 0 0.1];
    % Monitor test based on MLE using option scoremle
    scoremle= true;
    out=FSRfan(ytra,X,'la',la,'family','YJall','plots',1,'init',round(n/2),'msg',false,'scoremle',true);
%}
