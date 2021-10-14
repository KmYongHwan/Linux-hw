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
	{ 0xdc7e867e, "pcmcia_unregister_driver" },
	{ 0x7da5d7a, "pcmcia_register_driver" },
	{ 0x946cde34, "pcmcia_request_io" },
	{ 0x279b2f12, "init_airo_card" },
	{ 0x5e11012c, "pcmcia_enable_device" },
	{ 0xa187fc9, "pcmcia_loop_config" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x43b7bcf2, "stop_airo_card" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xce0f8ba1, "pcmcia_disable_device" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0xf29affd6, "netif_device_attach" },
	{ 0xea0542b1, "reset_airo_card" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia,airo");

MODULE_ALIAS("pcmcia:m015Fc000Af*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m015Fc0005f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m015Fc0007f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0105c0007f*fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "CA70EA8B11622E0D568D467");
