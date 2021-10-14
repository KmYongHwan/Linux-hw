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
	{ 0x4ceedc5a, "kill_anon_super" },
	{ 0x86705bb2, "zpool_unregister_driver" },
	{ 0xadf60d48, "kern_unmount" },
	{ 0x46643581, "zpool_register_driver" },
	{ 0x9493c370, "kern_mount" },
	{ 0x3fa55769, "__put_page" },
	{ 0xdcda97fb, "__put_devmap_managed_page" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x32a7182f, "page_mapping" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcac8de54, "__SetPageMovable" },
	{ 0x861d3e50, "kmem_cache_alloc" },
	{ 0x44e1b7dc, "alloc_pages_current" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xa07c2c57, "kmem_cache_free" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xb0e602eb, "memmove" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x2b20a022, "__lock_page" },
	{ 0x8ef38868, "unlock_page" },
	{ 0xc56c1e05, "__ClearPageMovable" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x43a8e2b7, "__free_pages" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xd16729c, "alloc_anon_inode" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xf12f47be, "kmem_cache_create" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xd4a89894, "init_pseudo" },
	{ 0x37a0cba, "kfree" },
	{ 0x7ede2eec, "iput" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x1fd1d2a5, "kmem_cache_destroy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbb3d2c11, "pv_ops" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DED1883D518C9CEF0E55A28");
