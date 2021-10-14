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
	{ 0x1fd1d2a5, "kmem_cache_destroy" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x776fe93b, "unregister_pernet_subsys" },
	{ 0x30e58949, "xt_unregister_matches" },
	{ 0xf12f47be, "kmem_cache_create" },
	{ 0xdf26cad3, "xt_register_matches" },
	{ 0x6b542969, "register_pernet_subsys" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x861d3e50, "kmem_cache_alloc" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xae4bd1fb, "skb_copy_bits" },
	{ 0xace2f5bb, "ipv6_skip_exthdr" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x48012e28, "xt_check_proc_name" },
	{ 0xc5850110, "printk" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc46bedbf, "proc_create_seq_private" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x944375db, "_totalram_pages" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x999e8297, "vfree" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x1dfdd782, "refcount_dec_and_mutex_lock" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xf47b3d97, "proc_mkdir" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xc4142837, "seq_printf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ac0e6e, "PDE_DATA" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa07c2c57, "kmem_cache_free" },
	{ 0xb4c99b4e, "remove_proc_entry" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "02B13465C3D0C777E317897");
