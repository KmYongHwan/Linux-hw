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
	{ 0x890b3d61, "_dev_err" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xc3f1d0c2, "tcpci_register_port" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xdfec67c9, "i2c_smbus_read_word_data" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6f497a3c, "tcpci_irq" },
	{ 0x1e253b77, "regmap_raw_read" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x58412e48, "regmap_raw_write" },
	{ 0xc529e32e, "tcpci_unregister_port" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "tcpci");

MODULE_ALIAS("i2c:rt1711h");

MODULE_INFO(srcversion, "2C77B46A3B9BECD11A9AE01");
