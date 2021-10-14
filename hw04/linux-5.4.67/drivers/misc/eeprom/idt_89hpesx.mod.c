#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x7d22f0d5, "simple_open" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x716265c7, "debugfs_initialized" },
	{ 0xa916b694, "strnlen" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x9166fada, "strncpy" },
	{ 0x4841bdee, "strnchr" },
	{ 0xbb4f4766, "simple_write_to_buffer" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xe3c6d9e8, "sysfs_create_bin_file" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x250dc6c8, "fwnode_property_present" },
	{ 0xb8d89726, "fwnode_property_read_u32_array" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x754d539c, "strlen" },
	{ 0x349cba85, "strchr" },
	{ 0xf464add, "fwnode_property_read_string" },
	{ 0x6e626fc8, "device_get_next_child_node" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xf9a482f9, "msleep" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x756785cc, "i2c_smbus_read_block_data" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf6ae4a4, "i2c_smbus_read_i2c_block_data" },
	{ 0xdfec67c9, "i2c_smbus_read_word_data" },
	{ 0xc6810ec2, "i2c_smbus_read_byte_data" },
	{ 0x4bfbdd4f, "i2c_smbus_write_block_data" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5aeff885, "i2c_smbus_write_i2c_block_data" },
	{ 0x2f4e42e1, "i2c_smbus_write_word_data" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0x562cd49a, "sysfs_remove_bin_file" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cidt,89hpes8nt2");
MODULE_ALIAS("of:N*T*Cidt,89hpes8nt2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes12nt3");
MODULE_ALIAS("of:N*T*Cidt,89hpes12nt3C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes24nt6ag2");
MODULE_ALIAS("of:N*T*Cidt,89hpes24nt6ag2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes32nt8ag2");
MODULE_ALIAS("of:N*T*Cidt,89hpes32nt8ag2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes32nt8bg2");
MODULE_ALIAS("of:N*T*Cidt,89hpes32nt8bg2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes12nt12g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes12nt12g2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes16nt16g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes16nt16g2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes24nt24g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes24nt24g2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes32nt24ag2");
MODULE_ALIAS("of:N*T*Cidt,89hpes32nt24ag2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes32nt24bg2");
MODULE_ALIAS("of:N*T*Cidt,89hpes32nt24bg2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes12n3");
MODULE_ALIAS("of:N*T*Cidt,89hpes12n3C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes12n3a");
MODULE_ALIAS("of:N*T*Cidt,89hpes12n3aC*");
MODULE_ALIAS("of:N*T*Cidt,89hpes24n3");
MODULE_ALIAS("of:N*T*Cidt,89hpes24n3C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes24n3a");
MODULE_ALIAS("of:N*T*Cidt,89hpes24n3aC*");
MODULE_ALIAS("of:N*T*Cidt,89hpes32h8");
MODULE_ALIAS("of:N*T*Cidt,89hpes32h8C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes32h8g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes32h8g2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes48h12");
MODULE_ALIAS("of:N*T*Cidt,89hpes48h12C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes48h12g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes48h12g2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes48h12ag2");
MODULE_ALIAS("of:N*T*Cidt,89hpes48h12ag2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes16h16");
MODULE_ALIAS("of:N*T*Cidt,89hpes16h16C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes22h16");
MODULE_ALIAS("of:N*T*Cidt,89hpes22h16C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes22h16g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes22h16g2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes34h16");
MODULE_ALIAS("of:N*T*Cidt,89hpes34h16C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes34h16g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes34h16g2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes64h16");
MODULE_ALIAS("of:N*T*Cidt,89hpes64h16C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes64h16g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes64h16g2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes64h16ag2");
MODULE_ALIAS("of:N*T*Cidt,89hpes64h16ag2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes12t3g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes12t3g2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes24t3g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes24t3g2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes16t4");
MODULE_ALIAS("of:N*T*Cidt,89hpes16t4C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes4t4g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes4t4g2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes10t4g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes10t4g2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes16t4g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes16t4g2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes16t4ag2");
MODULE_ALIAS("of:N*T*Cidt,89hpes16t4ag2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes5t5");
MODULE_ALIAS("of:N*T*Cidt,89hpes5t5C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes6t5");
MODULE_ALIAS("of:N*T*Cidt,89hpes6t5C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes8t5");
MODULE_ALIAS("of:N*T*Cidt,89hpes8t5C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes8t5a");
MODULE_ALIAS("of:N*T*Cidt,89hpes8t5aC*");
MODULE_ALIAS("of:N*T*Cidt,89hpes24t6");
MODULE_ALIAS("of:N*T*Cidt,89hpes24t6C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes6t6g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes6t6g2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes24t6g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes24t6g2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes16t7");
MODULE_ALIAS("of:N*T*Cidt,89hpes16t7C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes32t8");
MODULE_ALIAS("of:N*T*Cidt,89hpes32t8C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes32t8g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes32t8g2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes48t12");
MODULE_ALIAS("of:N*T*Cidt,89hpes48t12C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes48t12g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes48t12g2C*");
MODULE_ALIAS("i2c:89hpes8nt2");
MODULE_ALIAS("i2c:89hpes12nt3");
MODULE_ALIAS("i2c:89hpes24nt6ag2");
MODULE_ALIAS("i2c:89hpes32nt8ag2");
MODULE_ALIAS("i2c:89hpes32nt8bg2");
MODULE_ALIAS("i2c:89hpes12nt12g2");
MODULE_ALIAS("i2c:89hpes16nt16g2");
MODULE_ALIAS("i2c:89hpes24nt24g2");
MODULE_ALIAS("i2c:89hpes32nt24ag2");
MODULE_ALIAS("i2c:89hpes32nt24bg2");
MODULE_ALIAS("i2c:89hpes12n3");
MODULE_ALIAS("i2c:89hpes12n3a");
MODULE_ALIAS("i2c:89hpes24n3");
MODULE_ALIAS("i2c:89hpes24n3a");
MODULE_ALIAS("i2c:89hpes32h8");
MODULE_ALIAS("i2c:89hpes32h8g2");
MODULE_ALIAS("i2c:89hpes48h12");
MODULE_ALIAS("i2c:89hpes48h12g2");
MODULE_ALIAS("i2c:89hpes48h12ag2");
MODULE_ALIAS("i2c:89hpes16h16");
MODULE_ALIAS("i2c:89hpes22h16");
MODULE_ALIAS("i2c:89hpes22h16g2");
MODULE_ALIAS("i2c:89hpes34h16");
MODULE_ALIAS("i2c:89hpes34h16g2");
MODULE_ALIAS("i2c:89hpes64h16");
MODULE_ALIAS("i2c:89hpes64h16g2");
MODULE_ALIAS("i2c:89hpes64h16ag2");
MODULE_ALIAS("i2c:89hpes12t3g2");
MODULE_ALIAS("i2c:89hpes24t3g2");
MODULE_ALIAS("i2c:89hpes16t4");
MODULE_ALIAS("i2c:89hpes4t4g2");
MODULE_ALIAS("i2c:89hpes10t4g2");
MODULE_ALIAS("i2c:89hpes16t4g2");
MODULE_ALIAS("i2c:89hpes16t4ag2");
MODULE_ALIAS("i2c:89hpes5t5");
MODULE_ALIAS("i2c:89hpes6t5");
MODULE_ALIAS("i2c:89hpes8t5");
MODULE_ALIAS("i2c:89hpes8t5a");
MODULE_ALIAS("i2c:89hpes24t6");
MODULE_ALIAS("i2c:89hpes6t6g2");
MODULE_ALIAS("i2c:89hpes24t6g2");
MODULE_ALIAS("i2c:89hpes16t7");
MODULE_ALIAS("i2c:89hpes32t8");
MODULE_ALIAS("i2c:89hpes32t8g2");
MODULE_ALIAS("i2c:89hpes48t12");
MODULE_ALIAS("i2c:89hpes48t12g2");
MODULE_ALIAS("i2c:24c32");
MODULE_ALIAS("i2c:24c64");
MODULE_ALIAS("i2c:24c128");
MODULE_ALIAS("i2c:24c256");
MODULE_ALIAS("i2c:24c512");

MODULE_INFO(srcversion, "664078B0A892BC9A6C8D24B");
