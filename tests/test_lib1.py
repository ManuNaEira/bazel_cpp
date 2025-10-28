import unittest
import sys

import lib1_py


class TestBasic(unittest.TestCase):

  def test_add(self):
    self.assertEqual(lib1_py.print_hello(), "Hello")


if __name__ == "__main__":
  print(sys.version)
  unittest.main()
