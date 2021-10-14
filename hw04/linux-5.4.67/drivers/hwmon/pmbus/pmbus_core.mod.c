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
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x9fc1991d, "hwmon_device_register_with_groups" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0xc6810ec2, "i2c_smbus_read_byte_data" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x2f4e42e1, "i2c_smbus_write_word_data" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0xc373a5d1, "no_llseek" },
	{ 0x6ce22f0f, "hwmon_device_unregister" },
	{ 0x56470118, "__warn_printk" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdfec67c9, "i2c_smbus_read_word_data" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9166fada, "strncpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x35c871dd, "i2c_smbus_write_byte" },
	{ 0x63331ce9, "simple_attr_release" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xa19862fa, "rdev_get_id" },
	{ 0x8553edc1, "debugfs_attr_read" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6f486f60, "rdev_get_dev" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x96848186, "scnprintf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x86c80eb8, "devm_regulator_register" },
	{ 0x90019f67, "debugfs_attr_write" },
	{ 0x9a087e18, "simple_attr_open" },
	{ 0xc8dcc62a, "krealloc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C8652434F38E457D59D35B7");
