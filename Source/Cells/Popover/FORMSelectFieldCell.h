#import "FORMPopoverFieldCell.h"
#import "FORMFieldValuesTableViewController.h"

static NSString * const FORMSelectFormFieldCellIdentifier = @"FORMSelectFormFieldCellIdentifier";

@interface FORMSelectFieldCell : FORMPopoverFieldCell

@property (nonatomic, strong) FORMFieldValuesTableViewController *fieldValuesController;

@end
