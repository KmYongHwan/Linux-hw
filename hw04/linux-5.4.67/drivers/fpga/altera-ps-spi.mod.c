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
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0x12a38747, "usleep_range" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xdcca3259, "gpiod_get_raw_value_cansleep" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x85b7373, "spi_sync" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x6223272a, "fpga_mgr_register" },
	{ 0x9afc59a2, "devm_fpga_mgr_create" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0xe3e9bf89, "devm_gpiod_get" },
	{ 0xf1de7d06, "spi_get_device_id" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xb4792dec, "gpiod_get_value_cansleep" },
	{ 0x9c581176, "fpga_mgr_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "fpga-mgr");

MODULE_ALIAS("spi:cyclone-ps-spi");
MODULE_ALIAS("spi:fpga-passive-serial");
MODULE_ALIAS("spi:fpga-arria10-passive-serial");
MODULE_ALIAS("of:N*T*Caltr,fpga-passive-serial");
MODULE_ALIAS("of:N*T*Caltr,fpga-passive-serialC*");
MODULE_ALIAS("of:N*T*Caltr,fpga-arria10-passive-serial");
MODULE_ALIAS("of:N*T*Caltr,fpga-arria10-passive-serialC*");

MODULE_INFO(srcversion, "83D3C7086B9A3561FD4B4C6");
