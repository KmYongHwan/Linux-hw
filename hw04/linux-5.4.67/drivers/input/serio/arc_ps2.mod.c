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
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x30c0c597, "__serio_register_port" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x553e7cde, "devm_ioremap_resource" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x9ec43e96, "platform_get_irq_byname" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xe484e35f, "ioread32" },
	{ 0x816b3ac4, "serio_interrupt" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xaa13729, "serio_unregister_port" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C2427DEFE3FCB73696FFA86");
