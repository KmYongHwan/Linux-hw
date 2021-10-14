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
	{ 0x752832c, "noop_llseek" },
	{ 0x97f60368, "pmbus_do_remove" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0x7c81465f, "pmbus_get_debugfs_dir" },
	{ 0xe67878c0, "devm_led_classdev_register_ext" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x71f3c1d7, "pmbus_do_probe" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0x3d6b934d, "pmbus_read_byte_data" },
	{ 0xdb214bf7, "pmbus_read_word_data" },
	{ 0xc6810ec2, "i2c_smbus_read_byte_data" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdfec67c9, "i2c_smbus_read_word_data" },
	{ 0x756785cc, "i2c_smbus_read_block_data" },
	{ 0x1c3cb19e, "pmbus_set_page" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pmbus_core");

MODULE_ALIAS("of:N*T*Cibm,cffps1");
MODULE_ALIAS("of:N*T*Cibm,cffps1C*");
MODULE_ALIAS("of:N*T*Cibm,cffps2");
MODULE_ALIAS("of:N*T*Cibm,cffps2C*");
MODULE_ALIAS("i2c:ibm_cffps1");
MODULE_ALIAS("i2c:ibm_cffps2");

MODULE_INFO(srcversion, "A6FB8DFDBDCA2A30E8B0575");
