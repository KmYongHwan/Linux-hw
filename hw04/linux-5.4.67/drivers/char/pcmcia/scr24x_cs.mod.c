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
	{ 0xc373a5d1, "no_llseek" },
	{ 0xdc7e867e, "pcmcia_unregister_driver" },
	{ 0x8f1e938c, "class_destroy" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x7da5d7a, "pcmcia_register_driver" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x66414bc7, "__class_create" },
	{ 0xc5399abe, "cdev_del" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8aeb7a6b, "device_destroy" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x88e96942, "device_create" },
	{ 0xce0f8ba1, "pcmcia_disable_device" },
	{ 0x5e11012c, "pcmcia_enable_device" },
	{ 0x19d1aa1e, "cdev_add" },
	{ 0x40748904, "cdev_init" },
	{ 0xfbee36f, "devm_ioport_map" },
	{ 0xa187fc9, "pcmcia_loop_config" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x37a0cba, "kfree" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x848d372e, "iowrite8" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xf10de535, "ioread8" },
	{ 0xf9a482f9, "msleep" },
	{ 0x946cde34, "pcmcia_request_io" },
	{ 0xe4f5a219, "stream_open" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia");

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa53CB94F9pbBFDF89A5pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa6271EFA3pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2054E8DEpb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa54A33665pb*pc*pd*");

MODULE_INFO(srcversion, "D25BB8C2A9A2E6FE15F358E");
