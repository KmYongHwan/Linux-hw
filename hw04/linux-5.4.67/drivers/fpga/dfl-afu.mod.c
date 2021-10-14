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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdcda97fb, "__put_devmap_managed_page" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xdd995686, "dfl_fpga_dev_ops_register" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb9929b2b, "dfl_fpga_dev_feature_uinit" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6a5e5ee3, "dfl_fpga_port_ops_add" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xece784c2, "rb_first" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x6994aadf, "account_locked_vm" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xba312d7b, "current_task" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xf4358872, "devm_kfree" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0x729cbf90, "dfl_fpga_dev_feature_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x6fbe41a0, "dfl_fpga_dev_ops_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x5d597b48, "remap_pfn_range" },
	{ 0x96848186, "scnprintf" },
	{ 0xca9360b5, "rb_next" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xa637b975, "dma_ops" },
	{ 0x3fa55769, "__put_page" },
	{ 0x856befeb, "get_user_pages_fast" },
	{ 0xfb01297, "dfl_fpga_port_ops_del" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "dfl");


MODULE_INFO(srcversion, "A642FD1B485C2D766797AD0");
