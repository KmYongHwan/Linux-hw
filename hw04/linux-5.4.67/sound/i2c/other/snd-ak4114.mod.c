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
	{ 0x25033357, "_snd_pcm_stream_lock_irqsave" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc4142837, "seq_printf" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xd50f4cb9, "snd_device_new" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd3d70f53, "snd_ctl_notify" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa44201b4, "snd_pcm_stream_unlock_irqrestore" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x876c2483, "snd_ctl_boolean_mono_info" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x9068ffbd, "snd_ctl_new1" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xc2b58dff, "snd_ctl_free_one" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x16cc630c, "snd_card_rw_proc_new" },
	{ 0x37a0cba, "kfree" },
	{ 0x7638cbde, "snd_pcm_stop" },
	{ 0x5eca2bac, "snd_ctl_add" },
};

MODULE_INFO(depends, "snd-pcm,snd");


MODULE_INFO(srcversion, "F6064BADFD1BB5DEDDA5E36");
