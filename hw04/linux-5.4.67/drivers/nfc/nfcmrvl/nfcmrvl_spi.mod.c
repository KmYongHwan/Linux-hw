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
	{ 0x6d253371, "nci_spi_read" },
	{ 0xfe4752a0, "nfcmrvl_nci_unregister_dev" },
	{ 0x25e9cbaa, "nfcmrvl_nci_recv_frame" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x5b6b42ec, "nfcmrvl_parse_dt" },
	{ 0xc5850110, "printk" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0x5280af57, "nci_spi_send" },
	{ 0x2544da4, "nci_spi_allocate_spi" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x233f20fc, "nfcmrvl_nci_register_dev" },
	{ 0x29361773, "complete" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xbca28682, "devm_request_threaded_irq" },
};

MODULE_INFO(depends, "nci_spi,nfcmrvl");

MODULE_ALIAS("of:N*T*Cmarvell,nfc-spi");
MODULE_ALIAS("of:N*T*Cmarvell,nfc-spiC*");
MODULE_ALIAS("spi:nfcmrvl_spi");

MODULE_INFO(srcversion, "3E46C58519BB200465CBDF9");
