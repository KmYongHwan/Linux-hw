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
	{ 0xb56f876f, "param_get_int" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xa071f2c6, "single_release" },
	{ 0xcec6343e, "seq_read" },
	{ 0x830d73d4, "seq_lseek" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xdb9b1146, "thermal_cooling_device_unregister" },
	{ 0x627f576f, "__cpuhp_remove_state" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x4d91a821, "thermal_cooling_device_register" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x37a0cba, "kfree" },
	{ 0xe3d6084a, "__cpuhp_setup_state" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x8303ac5, "x86_match_cpu" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x408d2a04, "play_idle" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc4142837, "seq_printf" },
	{ 0x70691c99, "single_open" },
	{ 0x565854ea, "kthread_destroy_worker" },
	{ 0x3eb0fbae, "kthread_cancel_delayed_work_sync" },
	{ 0xedc597, "kthread_cancel_work_sync" },
	{ 0x4b22e469, "kthread_queue_work" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf86f560, "kthread_delayed_work_timer_fn" },
	{ 0xa57355c, "sched_setscheduler" },
	{ 0xdd07543e, "kthread_create_worker_on_cpu" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x95419a47, "kthread_queue_delayed_work" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc5850110, "printk" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("cpu:type:x86,ven0000fam*mod*:feature:*0083*");

MODULE_INFO(srcversion, "EF7BAD7198E01031A659E2F");
