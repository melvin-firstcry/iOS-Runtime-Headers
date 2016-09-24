/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUITiledLayoutSectionInfo : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    BOOL  _configured;
    NSMutableIndexSet * _indexesToReload;
    unsigned int  _numberOfTiles;
    struct CGSize { 
        double width; 
        double height; 
    }  _outerTileSize;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _sectionInsets;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _tileInsets;
    unsigned int  _tilesPerRow;
    NSString * _title;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) BOOL configured;
@property (nonatomic, readonly) NSMutableIndexSet *indexesToReload;
@property (nonatomic, readonly) unsigned int numberOfTiles;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } outerTileSize;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } sectionInsets;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } tileInsets;
@property (nonatomic) unsigned int tilesPerRow;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (void)configureIfNeededWithLayoutView:(id)arg1 sectionNumber:(unsigned int)arg2;
- (BOOL)configured;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForTileAtIndex:(unsigned int)arg1;
- (id)indexesToReload;
- (id)init;
- (unsigned int)numberOfTiles;
- (struct CGSize { double x1; double x2; })outerTileSize;
- (void)resetConfiguration;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionInsets;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTilesPerRow:(unsigned int)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })tileInsets;
- (unsigned int)tilesPerRow;
- (id)title;

@end