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
	{ 0xd3f298bf, "ndlc_probe" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xe3e9bf89, "devm_gpiod_get" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xe1a1645d, "ndlc_recv" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x50b9de98, "devm_acpi_dev_add_driver_gpios" },
	{ 0x85b7373, "spi_sync" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xe4f42565, "ndlc_remove" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2477c80f, "gpiod_set_value" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x2bc97e5a, "device_property_present" },
};

MODULE_INFO(depends, "st-nci");

MODULE_ALIAS("acpi*:SMO2101:*");
MODULE_ALIAS("of:N*T*Cst,st21nfcb-spi");
MODULE_ALIAS("of:N*T*Cst,st21nfcb-spiC*");
MODULE_ALIAS("spi:st_nci_spi");

MODULE_INFO(srcversion, "8B67D863C437884A785B1FD");
