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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xdc7e867e, "pcmcia_unregister_driver" },
	{ 0x7da5d7a, "pcmcia_register_driver" },
	{ 0x1d39a3c5, "_dev_notice" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0x666d76b6, "com20020_found" },
	{ 0xd620b865, "com20020_check" },
	{ 0x5e11012c, "pcmcia_enable_device" },
	{ 0x946cde34, "pcmcia_request_io" },
	{ 0x6c67570c, "alloc_arcdev" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xce0f8ba1, "pcmcia_disable_device" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia,com20020,arcnet");

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa59991666pb95DFFFAFpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paF8991729pb69DFF0C7pc*pd*");

MODULE_INFO(srcversion, "600A4397ABFD74D6F75A439");
