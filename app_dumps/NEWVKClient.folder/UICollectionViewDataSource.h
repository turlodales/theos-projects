/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol UICollectionViewDataSource <NSObject>
-(id)collectionView:(id)view cellForItemAtIndexPath:(id)indexPath;
-(int)collectionView:(id)view numberOfItemsInSection:(int)section;
@optional
-(id)collectionView:(id)view indexPathForIndexTitle:(id)indexTitle atIndex:(int)index;
-(id)indexTitlesForCollectionView:(id)collectionView;
-(void)collectionView:(id)view moveItemAtIndexPath:(id)indexPath toIndexPath:(id)indexPath3;
-(BOOL)collectionView:(id)view canMoveItemAtIndexPath:(id)indexPath;
-(id)collectionView:(id)view viewForSupplementaryElementOfKind:(id)kind atIndexPath:(id)indexPath;
-(int)numberOfSectionsInCollectionView:(id)collectionView;
@end

