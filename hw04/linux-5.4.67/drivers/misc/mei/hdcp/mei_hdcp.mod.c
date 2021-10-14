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
	{ 0x8b01ea6a, "mei_cldev_driver_unregister" },
	{ 0x4201ac13, "__mei_cldev_driver_register" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xb257330c, "component_master_add_with_match" },
	{ 0x3ceef13f, "component_match_add_typed" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xdea856d2, "mei_cldev_enable" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2548d16, "mei_cldev_recv" },
	{ 0x1b3a19aa, "mei_cldev_send" },
	{ 0x91535130, "component_bind_all" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x6c3fee80, "component_unbind_all" },
	{ 0x4ff4f4dd, "mei_cldev_disable" },
	{ 0x4bf75d1, "mei_cldev_set_drvdata" },
	{ 0x37a0cba, "kfree" },
	{ 0x67f4be04, "component_master_del" },
	{ 0x4d126af1, "mei_cldev_get_drvdata" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mei");

MODULE_ALIAS("mei:*:b638ab7e-94e2-4ea2-a552-d1c54b627f04:*:*");

MODULE_INFO(srcversion, "604EADB816C38ABA40B9C1C");
