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
	{ 0x2d3385d3, "system_wq" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xcdf2263e, "kernel_sendmsg" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x66984dba, "send_sig" },
	{ 0xa42e87c8, "queue_ch_frame" },
	{ 0x40aebdcf, "sock_release" },
	{ 0xa18765b4, "sock_recvmsg" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf24891c4, "recv_Dchannel" },
	{ 0x999e8297, "vfree" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x25b3797e, "skb_trim" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xba312d7b, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0x87e17297, "iov_iter_kvec" },
	{ 0x1cc9591c, "mISDN_unregister_device" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0xac6982f, "mISDN_initbchannel" },
	{ 0xf720a60b, "module_put" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x89570c37, "mISDN_freebchannel" },
	{ 0x4ef704ae, "mISDN_register_device" },
	{ 0xc9b0855e, "sock_create" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0xdaa5e71f, "mISDN_initdchannel" },
	{ 0x15314fce, "consume_skb" },
	{ 0x576c97a7, "mISDN_freedchannel" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0x47a8c8a0, "try_module_get" },
};

MODULE_INFO(depends, "mISDN_core");


MODULE_INFO(srcversion, "75D4F931E85774B4BD6EC4D");
