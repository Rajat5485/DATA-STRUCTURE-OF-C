class TreeNode:
    def __init__(self, key):
        self.left = None
        self.right = None
        self.val = key

def deleteNode(root, key):
    # Helper function to find the minimum value node in a subtree
    def minValueNode(node):
        current = node
        while current.left:
            current = current.left
        return current

    # Base case: if the root is None, return it
    if not root:
        return root

    # If the key to be deleted is smaller than the root's key, then it lies in the left subtree
    if key < root.val:
        root.left = deleteNode(root.left, key)

    # If the key to be deleted is greater than the root's key, then it lies in the right subtree
    elif key > root.val:
        root.right = deleteNode(root.right, key)

    # If the key is the same as the root's key, this is the node to be deleted
    else:
        # Node with only one child or no child
        if not root.left:
            return root.right
        elif not root.right:
            return root.left

        # Node with two children: Get the inorder successor (smallest in the right subtree)
        temp = minValueNode(root.right)

        # Copy the inorder successor's content to this node
        root.val = temp.val

        # Delete the inorder successor
        root.right = deleteNode(root.right, temp.val)

    return root

# Utility function to do inorder traversal of the BST
def inorder(root):
    if root:
        inorder(root.left)
        print(root.val, end=' ')
        inorder(root.right)

# Example usage
if __name__ == '__main__':
    # Construct the BST
    root = TreeNode(50)
    root.left = TreeNode(30)
    root.right = TreeNode(70)
    root.left.left = TreeNode(20
