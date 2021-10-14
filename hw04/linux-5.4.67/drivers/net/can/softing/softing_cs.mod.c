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
	{ 0x9a43e199, "_dev_info" },
	{ 0x12b678d5, "platform_device_register" },
	{ 0x4e83cd98, "dev_set_name" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x5e11012c, "pcmcia_enable_device" },
	{ 0xa187fc9, "pcmcia_loop_config" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x2597288d, "pcmcia_write_config_byte" },
	{ 0x41aeb27c, "pcmcia_request_window" },
	{ 0x37a0cba, "kfree" },
	{ 0xce0f8ba1, "pcmcia_disable_device" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia");

MODULE_ALIAS("pcmcia:m0168c0001f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0168c0002f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0168c0004f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0168c0005f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0168c0081f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0168c0084f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0168c0085f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0168c0102f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0168c0105f*fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "AD4E7033FD6A49B1DBD1C81");
