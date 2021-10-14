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
	{ 0x58412e48, "regmap_raw_write" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0xb655342c, "tcpm_pd_receive" },
	{ 0xea220941, "tcpm_tcpc_reset" },
	{ 0xe1ca0830, "device_get_named_child_node" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x3b84657b, "tcpm_pd_transmit_complete" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9e0bd753, "tcpm_pd_hard_reset" },
	{ 0xc37b9769, "tcpm_cc_change" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xceb50012, "tcpm_vbus_change" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x84c4bc58, "tcpm_register_port" },
	{ 0x76eeda4b, "tcpm_unregister_port" },
	{ 0x1e253b77, "regmap_raw_read" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xeb5bce08, "regmap_write" },
};

MODULE_INFO(depends, "tcpm");

MODULE_ALIAS("i2c:tcpci");

MODULE_INFO(srcversion, "835366B09946BBD4A4B3540");
