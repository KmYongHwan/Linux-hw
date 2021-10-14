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
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xedc03953, "iounmap" },
	{ 0x467e85fa, "ipack_put_device" },
	{ 0xd8ffafa0, "ipack_device_add" },
	{ 0x22c3cf4d, "ipack_device_init" },
	{ 0xacfca79e, "ipack_bus_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe484e35f, "ioread32" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x80fb2c60, "pci_request_region" },
	{ 0x2f586e32, "pci_dev_get" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc5534d64, "ioread16" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xe350e6c1, "ipack_bus_unregister" },
	{ 0xcb077337, "pci_dev_put" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x1c7ec4a3, "pci_release_region" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ipack");

MODULE_ALIAS("pci:v00001498d000030C8sv00001498sd0000300Abc*sc*i*");

MODULE_INFO(srcversion, "42F20D5C31E570304F23DE6");
