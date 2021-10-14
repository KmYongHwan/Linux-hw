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
	{ 0xe56bb250, "tpm_tis_resume" },
	{ 0xda4295e1, "tpm_pm_suspend" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0x1d71cf41, "spi_bus_unlock" },
	{ 0xf12d9d21, "spi_sync_locked" },
	{ 0x61588fe2, "spi_bus_lock" },
	{ 0x954c06c5, "tpm_tis_core_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x49a2b467, "tpm_tis_remove" },
	{ 0x11858bc4, "tpm_chip_unregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:SMO0768:*");
MODULE_ALIAS("of:N*T*Cst,st33htpm-spi");
MODULE_ALIAS("of:N*T*Cst,st33htpm-spiC*");
MODULE_ALIAS("of:N*T*Cinfineon,slb9670");
MODULE_ALIAS("of:N*T*Cinfineon,slb9670C*");
MODULE_ALIAS("of:N*T*Ctcg,tpm_tis-spi");
MODULE_ALIAS("of:N*T*Ctcg,tpm_tis-spiC*");
MODULE_ALIAS("spi:tpm_tis_spi");

MODULE_INFO(srcversion, "D2DF03C81BCB086824643BF");
