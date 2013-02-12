/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CorePDF.framework/CorePDF
 */

@class UIPDFPagePrivateVars;

@interface UIPDFPage : NSObject {
    NSUInteger _numberOfCharacters;
    UIPDFPagePrivateVars *_pdfPriv;
    NSInteger _rotationDegrees;
}

@property(readonly) NSUInteger index;
@property(readonly) NSUInteger numberOfCharacters;
@property(readonly) NSInteger rotationDegrees;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsForBox:(NSUInteger)arg1;
- (struct CGPDFPage { }*)cgPage;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })cropBox;
- (void)dealloc;
- (id)description;
- (id)document;
- (void)drawWithBox:(NSUInteger)arg1 inContext:(struct CGContext { }*)arg2;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })drawingTransformForBox:(NSUInteger)arg1;
- (NSUInteger)index;
- (id)init;
- (id)initWithCGPDFPage:(struct CGPDFPage { }*)arg1;
- (id)label;
- (NSUInteger)numberOfCharacters;
- (NSUInteger)pageNumber;
- (NSInteger)rotationDegrees;
- (id)selectionForEntirePage;
- (id)selectionForTextRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (id)selectionFromPoint:(struct CGPoint { float x1; float x2; })arg1 toPoint:(struct CGPoint { float x1; float x2; })arg2 padding:(float)arg3;
- (void)setDocument:(id)arg1;
- (id)string;

@end