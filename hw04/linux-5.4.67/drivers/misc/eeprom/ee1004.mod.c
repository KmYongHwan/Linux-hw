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
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x1d39a3c5, "_dev_notice" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x269a41d4, "i2c_new_dummy_device" },
	{ 0xe3c6d9e8, "sysfs_create_bin_file" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xa1799421, "i2c_smbus_read_byte" },
	{ 0x35c871dd, "i2c_smbus_write_byte" },
	{ 0x82e0d9e, "i2c_smbus_read_i2c_block_data_or_emulated" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x16779475, "i2c_unregister_device" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x562cd49a, "sysfs_remove_bin_file" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:ee1004");

MODULE_INFO(srcversion, "63E9EE52305B0272908D1CE");
