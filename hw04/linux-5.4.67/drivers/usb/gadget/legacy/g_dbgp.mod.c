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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x676d91c5, "gserial_connect" },
	{ 0xffaa944, "usb_ep_queue" },
	{ 0x8fe657b9, "usb_gadget_unregister_driver" },
	{ 0xa0e62d4b, "usb_ep_alloc_request" },
	{ 0x26668b93, "usb_ep_autoconfig_reset" },
	{ 0x5bda720d, "usb_ep_autoconfig" },
	{ 0xe692f9a8, "gserial_disconnect" },
	{ 0x33bfdca2, "gserial_alloc_line" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa36ea15e, "usb_ep_free_request" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xf27c5dd8, "usb_gadget_probe_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0xb6652875, "gserial_free_line" },
};

MODULE_INFO(depends, "u_serial,udc-core,libcomposite");


MODULE_INFO(srcversion, "233EA5FA33B3481216598E1");
