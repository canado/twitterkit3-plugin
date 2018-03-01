/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFFluidProgressView : UIView <WBSFluidProgressControllerDelegate> {
    UIView * _clippingView;
    float  _cornerRadius;
    <_SFFluidProgressViewDelegate> * _delegate;
    BOOL  _progressAnimationSuppressed;
    UIImageView * _progressBar;
    UIColor * _progressBarFillColor;
    WBSFluidProgressState * _state;
}

@property (nonatomic) float cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_SFFluidProgressViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL progressAnimationSuppressed;
@property (nonatomic, retain) UIColor *progressBarFillColor;
@property (getter=isShowingProgress, nonatomic, readonly) BOOL showingProgress;
@property (readonly) Class superclass;

+ (float)defaultHeight;

- (void).cxx_destruct;
- (void)_animateUsingDefaultTiming:(BOOL)arg1 stepAnimationTime:(float)arg2 options:(unsigned int)arg3 animations:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)_finishProgressBarWithDuration:(double)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_progressBarBoundsForValue:(double)arg1;
- (void)_updateProgressBarImage;
- (float)cornerRadius;
- (id)delegate;
- (void)fluidProgressController:(id)arg1 setProgressToCurrentPosition:(id)arg2;
- (void)fluidProgressController:(id)arg1 startFluidProgressBar:(id)arg2 animateFillFade:(BOOL)arg3;
- (void)fluidProgressController:(id)arg1 updateFluidProgressBar:(id)arg2;
- (void)fluidProgressControllerFinishProgressBar:(id)arg1 animateFillFade:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isShowingProgress;
- (void)layoutSubviews;
- (BOOL)progressAnimationSuppressed;
- (id)progressBarFillColor;
- (void)setCornerRadius:(float)arg1;
- (void)setDelegate:(id)arg1;
- (void)setProgressAnimationSuppressed:(BOOL)arg1;
- (void)setProgressAnimationSuppressed:(BOOL)arg1 duringFluidProgressState:(id)arg2 animated:(BOOL)arg3;
- (void)setProgressBarFillColor:(id)arg1;

@end
