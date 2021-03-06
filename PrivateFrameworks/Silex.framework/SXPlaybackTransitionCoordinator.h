/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXPlaybackTransitionCoordinator : NSObject <SXInteractivePlaybackTransitioning, SXPlaybackTransitionCoordinator> {
    NSMutableArray * _completionBlocks;
    <SXPlaybackTransitionContext> * _context;
    NSMutableArray * _transitionAlongsideBlocks;
}

@property (nonatomic, readonly) NSMutableArray *completionBlocks;
@property (nonatomic, retain) <SXPlaybackTransitionContext> *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMutableArray *transitionAlongsideBlocks;

- (void).cxx_destruct;
- (void)cancelInteractiveTransition;
- (id)completionBlocks;
- (id)context;
- (void)finishInteractiveTransition;
- (id)init;
- (void)setContext:(id)arg1;
- (void)startInteractiveTransitionWithContext:(id)arg1;
- (void)transitionAlongside:(id /* block */)arg1 withCompletionBlock:(id /* block */)arg2;
- (id)transitionAlongsideBlocks;
- (void)updateInteractiveTransition:(double)arg1;

@end
