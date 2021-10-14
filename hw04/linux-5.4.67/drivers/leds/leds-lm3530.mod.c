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
	{ 0xd52dbe7d, "led_classdev_unregister" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0x2af4b11a, "led_classdev_register_ext" },
	{ 0xfd1f31f7, "devm_regulator_get" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1fa8ea04, "regulator_enable" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:lm3530-led");

MODULE_INFO(srcversion, "F5BE99D5ED39E5E005F7E75");
