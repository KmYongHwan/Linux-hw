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
	{ 0x24a94b26, "snd_info_get_line" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb322147b, "snd_ac97_read" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xce8cb962, "snd_ak4114_resume" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x810a31e8, "snd_pcm_hw_constraint_step" },
	{ 0x6dab80b0, "snd_pcm_period_elapsed" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xbbc2f161, "snd_i2c_device_create" },
	{ 0x323ad9a7, "snd_pcm_hw_constraint_msbits" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x79907832, "snd_ice1712_akm4xxx_build_controls" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc4142837, "seq_printf" },
	{ 0xf1d77ceb, "snd_ak4113_create" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x77e309f9, "snd_rawmidi_set_ops" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xc363815f, "snd_card_disconnect" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7e8c49f, "snd_rawmidi_new" },
	{ 0x26f8d820, "_snd_ctl_add_slave" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa60ddf76, "snd_ak4113_external_rate" },
	{ 0xf7a9e685, "snd_ak4113_build" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xd50f4cb9, "snd_device_new" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xda0385c8, "snd_pcm_hw_constraint_list" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x883368a9, "snd_pt2258_build_controls" },
	{ 0x858d6bdd, "snd_pcm_set_ops" },
	{ 0x91591ee3, "snd_ctl_boolean_stereo_info" },
	{ 0xd3d70f53, "snd_ctl_notify" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1994b398, "snd_akm4xxx_reset" },
	{ 0x24595cf6, "snd_pcm_lib_free_pages" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x17e7d2e9, "snd_pcm_lib_ioctl" },
	{ 0xbdf1d90c, "snd_ak4114_build" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x876c2483, "snd_ctl_boolean_mono_info" },
	{ 0x6d4588a9, "snd_pt2258_reset" },
	{ 0x7aeafe04, "snd_pcm_lib_malloc_pages" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xacc21c79, "snd_ac97_suspend" },
	{ 0x65523885, "snd_card_new" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0x541e7fb, "snd_ice1712_akm4xxx_free" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x5280d446, "snd_i2c_bus_create" },
	{ 0x75f6921d, "snd_ctl_make_virtual_master" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xa916b694, "strnlen" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x9068ffbd, "snd_ctl_new1" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0xc06eefaf, "snd_pcm_set_sync" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x6853e173, "snd_ctl_find_id" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xfe17dcab, "snd_ac97_bus" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x7663f851, "snd_ak4114_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x9afcdd42, "snd_ac97_mixer" },
	{ 0x16cc630c, "snd_card_rw_proc_new" },
	{ 0x42cc2063, "snd_ak4114_suspend" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0xaa0a5b5c, "snd_ak4114_external_rate" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xe8815847, "snd_ak4114_reinit" },
	{ 0xd15a7509, "snd_akm4xxx_write" },
	{ 0xee86698c, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x68a57338, "snd_card_free" },
	{ 0x4b46eaf6, "snd_card_register" },
	{ 0xb5752134, "snd_pcm_new" },
	{ 0x27ad78fd, "snd_ac97_resume" },
	{ 0x5eca2bac, "snd_ctl_add" },
	{ 0xce1d0244, "snd_ac97_write_cache" },
	{ 0x160c4cd0, "snd_rawmidi_transmit" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x9cdebebc, "snd_rawmidi_transmit_empty" },
	{ 0x7c6f3989, "snd_ice1712_akm4xxx_init" },
	{ 0xabdb3c17, "snd_rawmidi_receive" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd,snd-ac97-codec,snd-ak4114,snd-pcm,snd-i2c,snd-ice17xx-ak4xxx,snd-ak4113,snd-rawmidi,snd-pt2258,snd-ak4xxx-adda");

MODULE_ALIAS("pci:v00001412d00001724sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "EBF2F8CDAF6BDBA4C60072A");
