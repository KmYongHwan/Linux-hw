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
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xa071f2c6, "single_release" },
	{ 0xcec6343e, "seq_read" },
	{ 0x830d73d4, "seq_lseek" },
	{ 0x4ceedc5a, "kill_anon_super" },
	{ 0x37a0cba, "kfree" },
	{ 0xc144b33e, "debugfs_remove" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x65433c2f, "unregister_shrinker" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x4098b27c, "balloon_aops" },
	{ 0xd16729c, "alloc_anon_inode" },
	{ 0x9493c370, "kern_mount" },
	{ 0x28fa224a, "register_shrinker" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x29ad8e33, "x86_hyper_type" },
	{ 0xb912560d, "static_key_disable" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x85f9d91f, "balloon_page_alloc" },
	{ 0x44e1b7dc, "alloc_pages_current" },
	{ 0xc5850110, "printk" },
	{ 0xb572e830, "vmci_doorbell_create" },
	{ 0x99f33a7c, "split_page" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x944375db, "_totalram_pages" },
	{ 0x668b19a1, "down_read" },
	{ 0x3fa55769, "__put_page" },
	{ 0xdcda97fb, "__put_devmap_managed_page" },
	{ 0xcac8de54, "__SetPageMovable" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xc56c1e05, "__ClearPageMovable" },
	{ 0x53b954a2, "up_read" },
	{ 0xc3ff38c2, "down_read_trylock" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xbd95e06a, "balloon_page_list_dequeue" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x5e949e0a, "vmci_doorbell_destroy" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xd4034828, "system_freezable_wq" },
	{ 0x6b2b69f7, "static_key_enable" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0xc4142837, "seq_printf" },
	{ 0xadf60d48, "kern_unmount" },
	{ 0x7ede2eec, "iput" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x70691c99, "single_open" },
	{ 0xd4a89894, "init_pseudo" },
	{ 0x43a8e2b7, "__free_pages" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x26d24cb8, "vm_event_states" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x76539b78, "balloon_page_list_enqueue" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "vmw_vmci");


MODULE_INFO(srcversion, "C8CB7CDF5877C9D3BB2B26B");
