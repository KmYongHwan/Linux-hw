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
	{ 0x4a95d625, "gpiochip_get_data" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9e67bc55, "i2c_mux_add_adapter" },
	{ 0xcebeeb50, "devm_power_supply_register" },
	{ 0xdae1d8d2, "devm_gpiochip_add_data" },
	{ 0x2bc97e5a, "device_property_present" },
	{ 0x9113120c, "devm_kasprintf" },
	{ 0x7f2dd6c6, "devm_kmemdup" },
	{ 0xbc7ade5a, "i2c_mux_alloc" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2f4e42e1, "i2c_smbus_write_word_data" },
	{ 0x3a0b85fb, "power_supply_get_drvdata" },
	{ 0x8c2c29d5, "i2c_mux_del_adapters" },
	{ 0x6f280d75, "power_supply_changed" },
	{ 0x250c1a52, "device_for_each_child" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdfec67c9, "i2c_smbus_read_word_data" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x410a1b12, "i2c_verify_client" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-mux");

MODULE_ALIAS("i2c:sbs-manager");
MODULE_ALIAS("i2c:ltc1760");

MODULE_INFO(srcversion, "E21CDFA0520B510AC09C116");
