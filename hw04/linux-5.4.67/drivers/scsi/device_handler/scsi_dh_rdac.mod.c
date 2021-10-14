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
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x2a0257be, "scsi_unregister_device_handler" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc5850110, "printk" },
	{ 0xf28be29e, "scsi_register_device_handler" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x571da921, "__scsi_execute" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xc12f0948, "scsi_get_vpd_page" },
	{ 0x1a1bb9bc, "sdev_prefix_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C5569BC80CD507961087740");
