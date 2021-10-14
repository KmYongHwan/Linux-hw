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
	{ 0x20c3f714, "adt7x10_dev_pm_ops" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xc6810ec2, "i2c_smbus_read_byte_data" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0xdfec67c9, "i2c_smbus_read_word_data" },
	{ 0x2f4e42e1, "i2c_smbus_write_word_data" },
	{ 0x16c39c8, "adt7x10_probe" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb76d7398, "adt7x10_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "adt7x10");

MODULE_ALIAS("i2c:adt7410");
MODULE_ALIAS("i2c:adt7420");

MODULE_INFO(srcversion, "073B83A58DF6DBD802AEECE");
